---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Mesh

`Mesh` is the base class for every renderable character body and costume piece. It wraps a renderable entity with outfit texturing (`setTexture`), tint and opacity (`color`, `alpha`), per-submesh [**Material**](../material/material.md) armor swaps, shadow and lighting flags, mirror walls, and a GPU instancing pipeline (`createInstancedMesh`, `addInstance`, `updateInstances`) that draws a whole roster of helmets in one call. A CharacterController-style script wraps its own entity (`Mesh mesh(getScene(), getEntity())`), swaps home/away kits, then budgets polygons with `getNumInstances` and `getWorldAABB` LOD checks.

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../../scene/scene.md)* scene | Constructs a mesh and adds its mesh component. |
| [**Scene**](../../../scene/scene.md)* scene, [**Entity**](../../../core/ecs/entity.md) entity | Wraps an existing scene entity as a mesh without adding components. |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector4**](../../../core/maths/vector4/vector4.md) | [**color**](mesh-color.md) | Base outfit tint; `setColor` swaps kits, `getColor` reads the tint back. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**alpha**](mesh-alpha.md) | Opacity; `setAlpha` fades cloaked characters, `getAlpha` reads it back. |
| [**Material**](../material/material.md) | [**material**](mesh-material.md) | Full PBR material, whole mesh or per armor submesh. |
| [**PrimitiveType**](../../../assets/mesh/primitive-type/primitive-type.md) | [**primitiveType**](mesh-primitive-type.md) | Primitive assembly, whole mesh or per submesh. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**faceCulling**](mesh-face-culling.md) | Back-face culling, whole mesh or per submesh (off for capes). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**castShadowsWithTexture**](mesh-cast-shadows-with-texture.md) | Alpha-tested shadows for hair and grilles, whole mesh or per submesh. |
| [**CullingMode**](../../../assets/mesh/culling-mode/culling-mode.md) | [**cullingMode**](mesh-culling-mode.md) | Which faces to cull (`BACK` by default). |
| [**WindingOrder**](../../../assets/mesh/winding-order/winding-order.md) | [**windingOrder**](mesh-winding-order.md) | Front-face winding (`CCW` by default). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**receiveLights**](mesh-receive-lights.md) | Whether dynamic lights affect the character. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**receiveIBL**](mesh-receive-ibl.md) | Whether image-based lighting tints the character. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**castShadows**](mesh-cast-shadows.md) | Whether the character casts shadows. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**receiveShadows**](mesh-receive-shadows.md) | Whether the character receives arena shadows. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**renderInReflectionProbes**](mesh-render-in-reflection-probes.md) | Whether probes capture the character. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**shadowsBillboard**](mesh-shadows-billboard.md) | Whether the shadow pass treats the mesh as a billboard. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**transparent**](mesh-transparent.md) | Whether the character renders in the transparent pass. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**autoTransparency**](mesh-auto-transparency.md) | Whether transparency follows texture alpha automatically. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**mirror**](mesh-mirror.md) | Planar mirror state via `setAsMirror` / `removeMirror` / `isMirror`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**instancedBillboard**](mesh-instanced-billboard.md) | Whether GPU instances face the camera. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**instancedCylindricalBillboard**](mesh-instanced-cylindrical-billboard.md) | Whether instances yaw upright toward the camera. |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**maxInstances**](mesh-max-instances.md) | Capacity of the GPU instance buffer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**instanceVisible**](mesh-instance-visible.md) | Per-instance visibility for benched teammates. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**load**](mesh-load.md) |  | Uploads the mesh to the GPU. Returns `true` on success. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTexture**](mesh-set-texture.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Assigns the outfit texture by file path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTexture**](mesh-set-texture.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& id, [**TextureData**](../texture-data/texture-data.md) data | Assigns the outfit texture from raw data. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTexture**](mesh-set-texture.md) | [**Framebuffer\***](../texture/framebuffer.md) framebuffer | Assigns the outfit texture from a live framebuffer. |
| [**AABB**](../../object/physics/2D/aabb/aabb.md) | [**getAABB**](mesh-get-aabb.md) |  | Local-space bounds for outfit preview pedestals. |
| [**AABB**](../../object/physics/2D/aabb/aabb.md) | [**getVerticesAABB**](mesh-get-vertices-aabb.md) |  | Tight vertex-based bounds for stretch detection. |
| [**AABB**](../../object/physics/2D/aabb/aabb.md) | [**getWorldAABB**](mesh-get-world-aabb.md) |  | World-space bounds for camera LOD checks. |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**getNumSubmeshes**](mesh-get-num-submeshes.md) |  | Count of armor submeshes for safe kit indexing. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createInstancedMesh**](mesh-create-instanced-mesh.md) |  | Allocates the GPU instancing buffer. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeInstancedMesh**](mesh-remove-instanced-mesh.md) |  | Frees the GPU instancing buffer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasInstancedMesh**](mesh-has-instanced-mesh.md) |  | Reports whether the instancing buffer exists. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addInstance**](mesh-add-instance.md) | [**Vector3**](../../../core/maths/vector3/vector3.md) position | Appends one helmet instance at a position. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addInstance**](mesh-add-instance.md) | [**InstanceData**](../../../assets/mesh/instance-data/instance-data.md) instance | Appends one fully-specified roster instance. |
| [**InstanceData&**](../../../assets/mesh/instance-data/instance-data.md) | [**getInstance**](mesh-get-instance.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Returns a mutable reference to one instance. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateInstance**](mesh-update-instance.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**Vector3**](../../../core/maths/vector3/vector3.md) position | Rewrites one instance position in place. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeInstance**](mesh-remove-instance.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Deletes one instance by index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateInstances**](mesh-update-instances.md) |  | Pushes edited instances to the GPU. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getNumInstances**](mesh-get-num-instances.md) |  | Live instance count for polygon budgeting. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearInstances**](mesh-clear-instances.md) |  | Removes every roster instance. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

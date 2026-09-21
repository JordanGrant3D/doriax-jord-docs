[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## MeshSystem

`MeshSystem` builds and maintains every mesh a CharacterController scene touches: primitive prop meshes (`createPlane`, `createBox`, `createSphere`, `createCylinder`, `createCapsule`, `createTorus`, `createWall`), GLTF/OBJ kit loading (`loadGLTF`, `loadOBJ`) with an async pipeline (`hasPendingAsyncModelLoads`, `cancelAsyncModelLoads`, `cancelAllAsyncModelLoads`, `isAsyncModelLoadPending`, `cancelAsyncModelLoad`), sprite / terrain / polygon / tilemap / model rebuilds (`createOrUpdateSprite`, `createOrUpdateTerrain`, `createOrUpdateMeshPolygon`, `createOrUpdateTilemap`, `createOrUpdateModel`), submesh override hand-off (`collectSubmeshOverrides`, `applySubmeshOverrides`, `canMergeStaticModel`, `getModelFilenameKey`), instancing control, and bound maintenance (`calculateMeshAABB`, `raycastTerrainSurface`). Gameplay code reaches it via `getScene()->getSystem<MeshSystem>()`.

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../../incomplete-docs.md)* scene | Constructs the mesh system for a scene. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createPlane**](mesh-system-create-plane.md) | MeshComponent& mesh, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) depth, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) tiles | Builds the locker-room floor grid. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createWall**](mesh-system-create-wall.md) | MeshComponent& mesh, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) tiles | Builds the turntable backdrop wall. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createBox**](mesh-system-create-box.md) | MeshComponent& mesh, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**float**](https://en.cppreference.com/cpp/keyword/float) depth, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) tiles | Builds equipment crates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createSphere**](mesh-system-create-sphere.md) | MeshComponent& mesh, [**float**](https://en.cppreference.com/cpp/keyword/float) radius, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) slices, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) stacks | Builds helmet-dome placeholders. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createCylinder**](mesh-system-create-cylinder.md) | MeshComponent& mesh, [**float**](https://en.cppreference.com/cpp/keyword/float) baseRadius, [**float**](https://en.cppreference.com/cpp/keyword/float) topRadius, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) slices, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) stacks | Builds trophy pedestals. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createCapsule**](mesh-system-create-capsule.md) | MeshComponent& mesh, [**float**](https://en.cppreference.com/cpp/keyword/float) baseRadius, [**float**](https://en.cppreference.com/cpp/keyword/float) topRadius, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) slices, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) stacks | Builds cheap body-double LOD capsules. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createTorus**](mesh-system-create-torus.md) | MeshComponent& mesh, [**float**](https://en.cppreference.com/cpp/keyword/float) radius, [**float**](https://en.cppreference.com/cpp/keyword/float) ringRadius, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) sides, [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) rings | Builds the turntable halo ring. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**canMergeStaticModel**](mesh-system-can-merge-static-model.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) ModelComponent& model, [**const**](https://en.cppreference.com/cpp/keyword/const) MeshComponent& mesh, [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)* reason | Reports whether a kit model can flatten into the root entity. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getModelFilenameKey**](mesh-system-get-model-filename-key.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filename | Canonical cache key for a kit path (static). |
| SubmeshOverrides | [**collectSubmeshOverrides**](mesh-system-collect-submesh-overrides.md) | [**Entity**](../../../core/ecs/entity.md) entity, [**const**](https://en.cppreference.com/cpp/keyword/const) ModelComponent& model | Snapshots armor edits before a kit reload. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applySubmeshOverrides**](mesh-system-apply-submesh-overrides.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) SubmeshOverrides& overrides, [**Entity**](../../../core/ecs/entity.md) entity, [**const**](https://en.cppreference.com/cpp/keyword/const) ModelComponent& model | Reapplies saved armor edits after a kit reload. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadGLTF**](mesh-system-load-gltf.md) | [**Entity**](../../../core/ecs/entity.md) entity, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) filename, [**bool**](https://en.cppreference.com/cpp/keyword/bool) asyncLoad, [**bool**](https://en.cppreference.com/cpp/keyword/bool) skipEntities, [**bool**](https://en.cppreference.com/cpp/keyword/bool) changeRootTransform | Streams a GLTF/GLB kit onto an entity. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadOBJ**](mesh-system-load-obj.md) | [**Entity**](../../../core/ecs/entity.md) entity, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) filename, [**bool**](https://en.cppreference.com/cpp/keyword/bool) asyncLoad | Loads an OBJ kit (fan boots) onto an entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setImageDecodeMaxDimension**](mesh-system-set-image-decode-max-dimension.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) dimension | Caps GLTF decode resolution; `0` is full (static). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createInstancedMesh**](mesh-system-create-instanced-mesh.md) | [**Entity**](../../../core/ecs/entity.md) entity | Allocates an entity instancing buffer. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeInstancedMesh**](mesh-system-remove-instanced-mesh.md) | [**Entity**](../../../core/ecs/entity.md) entity | Frees an entity instancing buffer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasInstancedMesh**](mesh-system-has-instanced-mesh.md) | [**Entity**](../../../core/ecs/entity.md) entity | Reports whether an entity owns an instancing buffer. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearBoneMapping**](mesh-system-clear-bone-mapping.md) | ModelComponent& model | Drops a kit joint-name lookup before rebinding. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearAnimationMapping**](mesh-system-clear-animation-mapping.md) | ModelComponent& model | Drops stale celebration clip lookups. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearMeshNodeMapping**](mesh-system-clear-mesh-node-mapping.md) | ModelComponent& model | Drops stale armor node lookups. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyModel**](mesh-system-destroy-model.md) | ModelComponent& model | Destroys every entity from a kit load. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**resetModelToBindPose**](mesh-system-reset-model-to-bind-pose.md) | ModelComponent& model | Returns kit nodes to the file bind pose. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**raycastTerrainSurface**](mesh-system-raycast-terrain-surface.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Ray**](../../../core/maths/ray/ray.md)& ray, TerrainComponent& terrain, Transform& transform, [**Vector3**](../../../core/maths/vector3/vector3.md)& worldPoint | Picks the training-ground surface point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasPendingAsyncModelLoads**](mesh-system-has-pending-async-model-loads.md) |  | Reports pending kit loads for this scene. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**cancelAsyncModelLoads**](mesh-system-cancel-async-model-loads.md) |  | Stops all pending kit loads for this scene. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**cancelAllAsyncModelLoads**](mesh-system-cancel-all-async-model-loads.md) |  | Stops pending kit loads across all scenes (static). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isAsyncModelLoadPending**](mesh-system-is-async-model-load-pending.md) | [**Entity**](../../../core/ecs/entity.md) entity, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filename | Reports whether one kit file is still streaming. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**cancelAsyncModelLoad**](mesh-system-cancel-async-model-load.md) | [**Entity**](../../../core/ecs/entity.md) entity, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filename | Stops one pending kit load. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createOrUpdateSprite**](mesh-system-create-or-update-sprite.md) | SpriteComponent& sprite, MeshComponent& mesh | Rebuilds the tactics-board badge sprite. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createOrUpdateTerrain**](mesh-system-create-or-update-terrain.md) | TerrainComponent& terrain, MeshComponent& mesh, Transform& transform | Rebuilds training-ground pitch chunks. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createOrUpdateMeshPolygon**](mesh-system-create-or-update-mesh-polygon.md) | MeshPolygonComponent& polygon, MeshComponent& mesh | Rebuilds the star-badge emblem mesh. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createOrUpdateTilemap**](mesh-system-create-or-update-tilemap.md) | TilemapComponent& tilemap, MeshComponent& mesh | Rebuilds the formation grid mesh. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createOrUpdateModel**](mesh-system-create-or-update-model.md) | [**Entity**](../../../core/ecs/entity.md) entity, ModelComponent& model, MeshComponent& mesh | Applies a loaded kit model to its mesh entities. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**calculateMeshAABB**](mesh-system-calculate-mesh-aabb.md) | MeshComponent& mesh | Recomputes cached mesh bounds. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**load**](mesh-system-load.md) |  | Initializes cached mesh builders on scene load. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**draw**](mesh-system-draw.md) |  | Issues mesh draw work for the frame. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroy**](mesh-system-destroy.md) |  | Releases mesh system resources on teardown. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**update**](mesh-system-update.md) | double dt | Advances async kit loads and deferred rebuilds. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**onComponentAdded**](mesh-system-on-component-added.md) | [**Entity**](../../../core/ecs/entity.md) entity, ComponentId componentId | Schedules the first build when a mesh component joins. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**onComponentRemoved**](mesh-system-on-component-removed.md) | [**Entity**](../../../core/ecs/entity.md) entity, ComponentId componentId | Releases polygons when a mesh component leaves. |

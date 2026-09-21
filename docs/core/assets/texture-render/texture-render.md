[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureRender
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## TextureRender

GPU-side texture allocation behind every CharacterController visual: sprite uploads, the render-to-texture minimap, and skybox mip chains. Gameplay code normally reaches it through [**Texture**](../texture/texture.md) `getRender()` rather than constructing one, then calls `createDynamicTexture()`/`updateTexture()` for the live minimap or reads platform handles (`getGLHandler()`, `getMetalHandler()`) for native interop.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**SokolTexture**](../../../incomplete-docs.md) | [**backend**](texture-render-backend.md) | Backend GPU object. Read it through the `get*Handler()` accessors. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Creates an unallocated render handle. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**TextureRender**](texture-render.md)& rhs | Copy constructor. Aliases the same backend allocation. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createTexture**](texture-render-create-texture.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) label, [**int**](https://en.cppreference.com/cpp/keyword/int) width, [**int**](https://en.cppreference.com/cpp/keyword/int) height, [**ColorFormat**](../../../incomplete-docs.md) colorFormat, [**TextureType**](../../../incomplete-docs.md) type, [**int**](https://en.cppreference.com/cpp/keyword/int) numFaces, [**void\***](https://en.cppreference.com/cpp/keyword/void) data[6], [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) size[6], [**TextureFilter**](../../../incomplete-docs.md) minFilter, [**TextureFilter**](../../../incomplete-docs.md) magFilter, [**TextureWrap**](../../../incomplete-docs.md) wrapU, [**TextureWrap**](../../../incomplete-docs.md) wrapV | Uploads raw face bytes as a GPU texture with explicit sampling state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createTextureCubeWithMips**](texture-render-create-texture-cube-with-mips.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) label, [**int**](https://en.cppreference.com/cpp/keyword/int) width, [**ColorFormat**](../../../incomplete-docs.md) colorFormat, [**int**](https://en.cppreference.com/cpp/keyword/int) numMipmaps, [**void\***](https://en.cppreference.com/cpp/keyword/void) data[], [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) size[], [**TextureFilter**](../../../incomplete-docs.md) minFilter, [**TextureFilter**](../../../incomplete-docs.md) magFilter, [**TextureWrap**](../../../incomplete-docs.md) wrapU, [**TextureWrap**](../../../incomplete-docs.md) wrapV | Uploads a cube map with custom pre-filtered mipmap chains (`data[level]` packs all six faces contiguously) for glossy CharacterController reflections. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createFramebufferTexture**](texture-render-create-framebuffer-texture.md) | [**TextureType**](../../../incomplete-docs.md) type, [**bool**](https://en.cppreference.com/cpp/keyword/bool) depth, [**bool**](https://en.cppreference.com/cpp/keyword/bool) shadowMap, [**int**](https://en.cppreference.com/cpp/keyword/int) width, [**int**](https://en.cppreference.com/cpp/keyword/int) height, [**TextureFilter**](../../../incomplete-docs.md) minFilter, [**TextureFilter**](../../../incomplete-docs.md) magFilter, [**TextureWrap**](../../../incomplete-docs.md) wrapU, [**TextureWrap**](../../../incomplete-docs.md) wrapV, [**ColorFormat**](../../../incomplete-docs.md) colorFormat = [**ColorFormat**](../../../incomplete-docs.md)::[**RGBA**](../../../incomplete-docs.md) | Allocates a render-target texture (the minimap color buffer), optionally with depth. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createDynamicTexture**](texture-render-create-dynamic-texture.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) label, [**int**](https://en.cppreference.com/cpp/keyword/int) width, [**int**](https://en.cppreference.com/cpp/keyword/int) height | Allocates a CPU-updatable texture (no initial data) for the live minimap, refreshed every few frames with `updateTexture()`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateTexture**](texture-render-update-texture.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**void\***](https://en.cppreference.com/cpp/keyword/void) data, [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) size | Pushes fresh CPU bytes into a dynamic texture. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyTexture**](texture-render-destroy-texture.md) |  | Releases the GPU allocation behind this handle. |
| [**uint32_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getGLHandler**](texture-render-get-gl-handler.md) |  | OpenGL texture handle for native interop, e. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**void\***](https://en.cppreference.com/cpp/keyword/void) | [**getMetalHandler**](texture-render-get-metal-handler.md) |  | Metal texture handle for native interop on Apple builds compositing the CharacterController portrait. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**void\***](https://en.cppreference.com/cpp/keyword/void) | [**getD3D11Handler**](texture-render-get-d3d11-handler.md) |  | Direct3D 11 resource-view handle for native interop on Windows builds streaming sprite sheets. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**void\***](https://en.cppreference.com/cpp/keyword/void) | [**getVulkanHandler**](texture-render-get-vulkan-handler.md) |  | Vulkan image-view handle for native interop on Vulkan builds rendering the minimap overlay. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**void\***](https://en.cppreference.com/cpp/keyword/void) | [**getVulkanImageHandler**](texture-render-get-vulkan-image-handler.md) |  | Raw Vulkan image handle (distinct from the view) for barrier-aware minimap passes that manage layout transitions manually. |
| [**uint32_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getViewId**](texture-render-get-view-id.md) |  | Backend view identifier used with `isViewValid()` to confirm the minimap texture survived a device reset. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isViewValid**](texture-render-is-view-valid.md) | [**uint32_t**](https://en.cppreference.com/w/cpp/types/integer) viewId | Static check that a cached view id still references a live GPU texture. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isCreated**](texture-render-is-created.md) |  | Returns `true` once the GPU resource exists. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**TextureRender**](texture-render.md)& | [**operator=**](texture-render-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**TextureRender&**](texture-render.md) rhs | Aliases the same backend allocation. |


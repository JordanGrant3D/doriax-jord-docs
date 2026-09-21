---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Texture

A GPU texture resource backing CharacterController visuals: 2D sprite sheets, cube-map skyboxes, and render-to-texture minimap feeds. A `Texture` is a lightweight pool handle, so copies share one GPU upload; assign it to a [**Material**](../material/material.md) field or pass it to mesh texture slots. Loading is lazy — the upload happens on first render — and CPU pixels ([TextureData](../texture-data/texture-data.md)) can be pre-warmed on a loading screen with `load()`.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**TextureFilter**](../../../incomplete-docs.md) | [**minFilter**](texture-min-filter.md) | Minification filter used when the sprite is rendered smaller than its native resolution. |
| [**TextureFilter**](../../../incomplete-docs.md) | [**magFilter**](texture-mag-filter.md) | Magnification filter used when the texture is rendered larger than its native resolution. |
| [**TextureWrap**](../../../incomplete-docs.md) | [**wrapU**](texture-wrap-u.md) | Horizontal wrapping mode for UVs outside `[0, 1]`. |
| [**TextureWrap**](../../../incomplete-docs.md) | [**wrapV**](texture-wrap-v.md) | Vertical wrapping mode for UVs outside `[0, 1]`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**svgScale**](texture-svg-scale.md) | Rasterization scale for `. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**releaseDataAfterLoad**](texture-release-data-after-load.md) | Frees CPU-side pixel data once the texture reaches the GPU (`true` by default). |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Creates an empty handle with `LINEAR` filtering and `REPEAT` wrapping. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) path | Loads a 2D sprite from file (lazy). The legacy `"icon.svg?svgScale=4"` suffix is absorbed into `svgScale`. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) id, [**TextureData**](../texture-data/texture-data.md) data | Builds a texture from in-memory pixels and clears `releaseDataAfterLoad`. |
| [**Framebuffer\***](../../../incomplete-docs.md) framebuffer | Wraps a render target for the minimap feed. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Texture**](texture.md)& rhs | Copy constructor. Aliases the same pooled GPU resource. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinFilter**](texture-min-filter.md) | [**TextureFilter**](../../../incomplete-docs.md) filter | Minification filter used when the sprite is rendered smaller than its native resolution. |
| [**TextureFilter**](../../../incomplete-docs.md) | [**const;**](texture-min-filter.md) |  | Returns the current value of `minFilter`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMagFilter**](texture-mag-filter.md) | [**TextureFilter**](../../../incomplete-docs.md) filter | Magnification filter used when the texture is rendered larger than its native resolution. |
| [**TextureFilter**](../../../incomplete-docs.md) | [**const;**](texture-mag-filter.md) |  | Returns the current value of `magFilter`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setWrapU**](texture-wrap-u.md) | [**TextureWrap**](../../../incomplete-docs.md) wrapU | Horizontal wrapping mode for UVs outside `[0, 1]`. |
| [**TextureWrap**](../../../incomplete-docs.md) | [**const;**](texture-wrap-u.md) |  | Returns the current value of `wrapU`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setWrapV**](texture-wrap-v.md) | [**TextureWrap**](../../../incomplete-docs.md) wrapV | Vertical wrapping mode for UVs outside `[0, 1]`. |
| [**TextureWrap**](../../../incomplete-docs.md) | [**const;**](texture-wrap-v.md) |  | Returns the current value of `wrapV`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSvgScale**](texture-svg-scale.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) scale | Rasterization scale for `. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**const;**](texture-svg-scale.md) |  | Returns the current value of `svgScale`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setReleaseDataAfterLoad**](texture-release-data-after-load.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) releaseDataAfterLoad | Frees CPU-side pixel data once the texture reaches the GPU (`true` by default). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**const;**](texture-release-data-after-load.md) |  | Returns the current value of `releaseDataAfterLoad`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPath**](texture-set-path.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) path | Points the texture at a 2D image file without loading it; the upload is deferred until first render. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setData**](texture-set-data.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) id, [**TextureData**](../texture-data/texture-data.md) data | Builds a texture from in-memory pixels ([TextureData](. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setId**](texture-set-id.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) id | Assigns a pool cache key without pixel data, so this handle aliases a sprite-sheet texture already uploaded by the loading screen. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCubeMap**](texture-set-cube-map.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) path | Treats `path` as a directory of six face images (`front`, `back`, `left`, `right`, `up`, `down`) for a CharacterController skybox reflection probe. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCubePath**](texture-set-cube-path.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) path | Sets a single cube-map face by index (`0` = front through `5` = down). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCubePaths**](texture-set-cube-paths.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) front, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) back, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) left, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) right, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) up, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) down | Loads a cube map from six individual files, typically the CharacterController level skybox or environment reflection. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCubeDatas**](texture-set-cube-datas.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) id, [**TextureData**](../texture-data/texture-data.md) front, [**TextureData**](../texture-data/texture-data.md) back, [**TextureData**](../texture-data/texture-data.md) left, [**TextureData**](../texture-data/texture-data.md) right, [**TextureData**](../texture-data/texture-data.md) up, [**TextureData**](../texture-data/texture-data.md) down | Builds a cube map from six in-memory [TextureData](. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFramebuffer**](texture-set-framebuffer.md) | [**Framebuffer\***](../../../incomplete-docs.md) framebuffer | Points the texture at a render target so the minimap camera output can be sampled like any sprite. |
| [**TextureLoadResult**](../texture-load-result/texture-load-result.md) | [**load**](texture-load.md) |  | Forces an immediate CPU-side load from disk instead of waiting for first render. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**retryLoad**](texture-retry-load.md) |  | Re-arms a file-backed texture after a failed load so the next `load()` starts a fresh attempt. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroy**](texture-destroy.md) |  | Releases the GPU resource and removes the texture from the pool, leaving the handle empty. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**invalidateRender**](texture-invalidate-render.md) |  | Drops the cached GPU handle so the next render re-uploads the sprite. |
| [**TextureRender**](../texture-render/texture-render.md)* | [**getRender**](texture-get-render.md) | [**TextureRender\***](../texture-render/texture-render.md) fallBackTexture = [**NULL**](../../../incomplete-docs.md) | Returns the backend [TextureRender](. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getPath**](texture-get-path.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index = 0 | Returns the source file path (clean path for `. |
| [**TextureData**](../texture-data/texture-data.md)& | [**getData**](texture-get-data.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index = 0 | Returns the CPU pixel buffer (face `index` for cube maps). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasData**](texture-has-data.md) |  | Reports whether the backing pixel array exists, so `getData()` can be dereferenced safely. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getId**](texture-get-id.md) |  | Returns the pool cache key. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getNumFaces**](texture-get-num-faces.md) |  | Returns `1` for 2D sprites and `6` for cube-map skyboxes. |
| [**TextureType**](../../../incomplete-docs.md) | [**getType**](texture-get-type.md) |  | Returns the texture dimensionality (`TEXTURE_2D` for sprites, `TEXTURE_CUBE` for skyboxes). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isCubeMap**](texture-is-cube-map.md) |  | Returns `true` for six-face skybox textures. |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**getWidth**](texture-get-width.md) |  | Pixel width of the loaded sprite, or `0` when not loaded yet. |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**getHeight**](texture-get-height.md) |  | Pixel height of the loaded sprite, or `0` when not loaded yet. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isTransparent**](texture-is-transparent.md) |  | Returns `true` when any pixel has alpha below `1. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**releaseData**](texture-release-data.md) |  | Frees CPU-side pixels after GPU upload to save RAM on low-memory devices. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**empty**](texture-empty.md) |  | Returns `true` when no path, data, or framebuffer is assigned. |
| [**Framebuffer\***](../../../incomplete-docs.md) | [**getFramebuffer**](texture-get-framebuffer.md) |  | Returns the bound render target, or `nullptr` for regular sprites. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFramebuffer**](texture-is-framebuffer.md) |  | Returns `true` for render-to-texture handles created from a `Framebuffer`, such as the live minimap feed. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFramebufferOutdated**](texture-is-framebuffer-outdated.md) |  | Returns `true` when the render target was resized or recreated since this texture last bound it, telling the minimap pass to rebind before sampling. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Texture**](texture.md)& | [**operator=**](texture-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Texture&**](texture.md) rhs | Shares the sprite-sheet GPU resource with another handle (lightweight pool alias, not a pixel copy). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator==**](texture-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Texture&**](texture.md) rhs | Compares pool identity, so the skin selector can tell whether two handles reference the same CharacterController sprite. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator!=**](texture-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Texture&**](texture.md) rhs | Inverse of `operator==`: detects when the minimap feed handle diverges from the sprite-sheet handle. |



---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

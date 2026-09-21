[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## TextureData

CPU-side pixel buffer behind CharacterController visuals: sprite sheets, HUD icons, and skybox faces. A `TextureData` decodes, resamples (`resize`, `crop`, `flipVertical`), and inspects (`getColorComponent`, `isTransparent`) image bytes before a [**Texture**](../texture/texture.md) uploads them. Vector (`.svg`) sources rasterize at `svgScale`, and static helpers (`hasSvgExtension`, `parseSvgScalePath`) keep icon paths serializable.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**dataOwned**](texture-data-data-owned.md) | Whether this buffer owns (and frees) its pixel pointer. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**svgScale**](texture-data-svg-scale.md) | Rasterization scale for `.svg` sources (`2.0` = double resolution). |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Creates an empty buffer with `svgScale` of `1.0`. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) width, [**int**](https://en.cppreference.com/cpp/keyword/int) height, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) size, [**ColorFormat**](../../../incomplete-docs.md) color_format, [**int**](https://en.cppreference.com/cpp/keyword/int) channels, [**void\***](https://en.cppreference.com/cpp/keyword/void) data | Wraps an explicit pixel allocation. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**char\***](https://en.cppreference.com/cpp/keyword/char) filename | Loads and decodes a sprite file immediately. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**char\***](https://en.cppreference.com/cpp/keyword/char) data, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) dataLength | Decodes a sprite from a memory blob. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**TextureData**](texture-data.md)& v | Copy constructor. Deep-copies the pixel bytes. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDataOwned**](texture-data-data-owned.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) dataOwned | Sets whether this buffer frees its pixel pointer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**getDataOwned**](texture-data-data-owned.md) |  | Returns `true` while this buffer owns its pixel pointer. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSVGScale**](texture-data-svg-scale.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) svgScale | Sets the `.svg` rasterization scale before loading. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSVGScale**](texture-data-svg-scale.md) |  | Returns the `.svg` rasterization scale. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**copy**](texture-data-copy.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**TextureData&**](texture-data.md) v | Deep-copies pixel width, height, format, and image bytes from another buffer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadTexture**](texture-data-load-texture.md) | [**Data\***](../../../incomplete-docs.md) filedata | Decodes pixels from an already-opened `Data` file object (auto-detects SVG versus raster). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadTextureFromFile**](texture-data-load-texture-from-file.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char\***](https://en.cppreference.com/cpp/keyword/char) filename | Loads and decodes a sprite file from disk in one call. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadTextureFromMemory**](texture-data-load-texture-from-memory.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**char\***](https://en.cppreference.com/cpp/keyword/char) data, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) dataLength | Decodes a sprite from a memory blob, e. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasSvgExtension**](texture-data-has-svg-extension.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char\***](https://en.cppreference.com/cpp/keyword/char) filename | Static helper reporting whether a filename ends in `. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**parseSvgScalePath**](texture-data-parse-svg-scale-path.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) path, [**float\***](https://en.cppreference.com/cpp/keyword/float) outScale = nullptr | Splits the legacy `"icon. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**buildSvgScalePath**](texture-data-build-svg-scale-path.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string&**](https://en.cppreference.com/w/cpp/string/basic_string) cleanPath, [**float**](https://en.cppreference.com/cpp/keyword/float) scale | Appends the `?svgScale=` suffix when the scale meaningfully differs from `1. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadCubeMapFromSingleFile**](texture-data-load-cubemap-from-single-file.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char\***](https://en.cppreference.com/cpp/keyword/char) filename, [**std::array**](../../../incomplete-docs.md)<[**TextureData**](texture-data.md), 6>& data | Splits one cross-layout skybox image into six face buffers for the CharacterController reflection probe, avoiding six separate file opens on the loading screen. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**releaseImageData**](texture-data-release-image-data.md) |  | Frees the CPU pixel bytes while keeping the descriptor (size, format) intact. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hasAlpha**](texture-data-has-alpha.md) |  | Returns `true` when the decoded buffer carries an alpha channel. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**resizePowerOfTwo**](texture-data-resize-power-of-two.md) |  | Resamples the buffer up to the nearest power-of-two dimensions for GPUs that require POT sprite sheets. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**resizeToSquare**](texture-data-resize-to-square.md) |  | Resamples the buffer into a square, used for minimap tile thumbnails that must be NxN. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fitPowerOfTwo**](texture-data-fit-power-of-two.md) |  | Pads (rather than resamples) the buffer out to power-of-two dimensions, preserving sprite-sheet texel sharpness for pixel-art frames. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**resize**](texture-data-resize.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) newWidth, [**int**](https://en.cppreference.com/cpp/keyword/int) newHeight | Resamples the buffer to explicit dimensions, e. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**crop**](texture-data-crop.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) xOffset, [**int**](https://en.cppreference.com/cpp/keyword/int) yOffset, [**int**](https://en.cppreference.com/cpp/keyword/int) newWidth, [**int**](https://en.cppreference.com/cpp/keyword/int) newHeight | Extracts a rectangle — one CharacterController walk frame — out of a sprite sheet for per-frame CPU sampling. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fitSize**](texture-data-fit-size.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) xOffset, [**int**](https://en.cppreference.com/cpp/keyword/int) yOffset, [**int**](https://en.cppreference.com/cpp/keyword/int) newWidth, [**int**](https://en.cppreference.com/cpp/keyword/int) newHeight | Places a rectangle into a resized canvas, letterboxing the CharacterController portrait into the loading-screen banner without stretching it. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**flipVertical**](texture-data-flip-vertical.md) |  | Flips scanlines top-to-bottom to convert between file order and GPU order. |
| [**unsigned char**](https://en.cppreference.com/cpp/keyword/unsigned) | [**getColorComponent**](texture-data-get-color-component.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) x, [**int**](https://en.cppreference.com/cpp/keyword/int) y, [**int**](https://en.cppreference.com/cpp/keyword/int) color | Samples one channel (`0` = R, `1` = G, `2` = B, `3` = A) at texel `(x, y)`. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getWidth**](texture-data-get-width.md) |  | Current pixel width, used to divide sprite sheets into animation frames on the loading screen. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getHeight**](texture-data-get-height.md) |  | Current pixel height; pair with `getWidth()` to count rows in the CharacterController sprite sheet. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getOriginalWidth**](texture-data-get-original-width.md) |  | Width before any `resize`/`crop`, so the loading screen can report progress against the source sprite sheet. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getOriginalHeight**](texture-data-get-original-height.md) |  | Height before any `resize`/`crop`; compare with `getHeight()` to detect downscaled minimap icons. |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**getSize**](texture-data-get-size.md) |  | Total buffer size in bytes. |
| [**ColorFormat**](../../../incomplete-docs.md) | [**getColorFormat**](texture-data-get-color-format.md) |  | Pixel layout (`RED`, `RGBA`, `RED16`). |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getChannels**](texture-data-get-channels.md) |  | Channel count (`4` for RGBA sprite sheets). |
| [**void\***](https://en.cppreference.com/cpp/keyword/void) | [**getData**](texture-data-get-data.md) |  | Raw pixel pointer for custom CPU work such as software-tinting the CharacterController damage flash. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isTransparent**](texture-data-is-transparent.md) |  | Returns `true` when any texel has alpha below `1. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getMinNearestPowerOfTwo**](texture-data-get-min-nearest-power-of-two.md) |  | Smallest power of two covering the buffer, used to size POT sprite-sheet atlases without overshooting. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getBytesPerChannel**](texture-data-get-bytes-per-channel.md) | [**ColorFormat**](../../../incomplete-docs.md) format | Static helper returning bytes per channel for a format (`2` for `RED16`, `1` otherwise). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**cleanupTexture**](texture-data-cleanup-texture.md) | [**void\***](https://en.cppreference.com/cpp/keyword/void) data | Render-callback-compatible deleter that frees pixel memory handed to the GPU upload queue. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**TextureData**](texture-data.md)& | [**operator=**](texture-data-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**TextureData&**](texture-data.md) v | Deep-copies the full buffer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator==**](texture-data-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**TextureData&**](texture-data.md) v | Compares buffer contents for equality. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator!=**](texture-data-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**TextureData&**](texture-data.md) v | Compares buffer contents for inequality. |



---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

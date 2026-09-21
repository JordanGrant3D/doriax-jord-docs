[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Image
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Image

`Image` is the foundational 2D UI visual element: a textured or colour-filled rectangle with optional 9-patch scaling. A CharacterController HUD uses it for portrait sprites, tinting the portrait per team via `setColor` and flashing it on damage via `setAlpha`. Inherits `UILayout`.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector4**](../../maths/vector4/vector4.md) | [**color**](image-color.md) | sRGB tint multiplied with the texture. Defaults to `(1, 1, 1, 1)`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**alpha**](image-alpha.md) | Opacity channel of the tint. Defaults to `1.0`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**flipY**](image-flip-y.md) | Flips the texture vertically. Defaults to `false`. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**patchMarginLeft**](image-patch-margin-left.md) | 9-patch left inset in pixels. Defaults to `0`. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**patchMarginRight**](image-patch-margin-right.md) | 9-patch right inset in pixels. Defaults to `0`. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**patchMarginTop**](image-patch-margin-top.md) | 9-patch top inset in pixels. Defaults to `0`. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**patchMarginBottom**](image-patch-margin-bottom.md) | 9-patch bottom inset in pixels. Defaults to `0`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**textureScaleFactor**](image-texture-scale-factor.md) | UV inset in texels hiding atlas bleeding. Defaults to `0.0`. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene\***](../../scene/scene.md) scene | Constructs an image on a new scene entity with `UIComponent` and `ImageComponent` attached. |
| [**Scene\***](../../scene/scene.md) scene, [**Entity**](../../ecs/entity.md) entity | Wraps an existing scene entity as an image without adding components. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createImage**](image-create-image.md) |  | Builds the image geometry and GPU buffers immediately. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**load**](image-load.md) |  | Loads the UI texture into the render system. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPatchMargin**](image-patch-margin.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) margin | Sets all four 9-patch insets to `margin`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPatchMargin**](image-patch-margin.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginLeft, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginRight, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginTop, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginBottom | Sets each 9-patch inset individually. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPatchMarginLeft**](image-patch-margin-left.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginLeft | Sets the 9-patch left inset. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getPatchMarginLeft**](image-patch-margin-left.md) |  | Returns the 9-patch left inset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPatchMarginRight**](image-patch-margin-right.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginRight | Sets the 9-patch right inset. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getPatchMarginRight**](image-patch-margin-right.md) |  | Returns the 9-patch right inset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPatchMarginTop**](image-patch-margin-top.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginTop | Sets the 9-patch top inset. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getPatchMarginTop**](image-patch-margin-top.md) |  | Returns the 9-patch top inset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPatchMarginBottom**](image-patch-margin-bottom.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) marginBottom | Sets the 9-patch bottom inset. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getPatchMarginBottom**](image-patch-margin-bottom.md) |  | Returns the 9-patch bottom inset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTexture**](image-set-texture.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Displays the texture at a file path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTexture**](image-set-texture.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& id, [**TextureData**](../texture-data/texture-data.md) data | Displays in-memory pixel data cached under `id`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTexture**](image-set-texture.md) | [**Framebuffer\***](../../../incomplete-docs.md) framebuffer | Displays a framebuffer for render-to-texture UI. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTextureScaleFactor**](image-texture-scale-factor.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) textureScaleFactor | Sets the UV inset in texels. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getTextureScaleFactor**](image-texture-scale-factor.md) |  | Returns the UV inset in texels. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setColor**](image-color.md) | [**Vector4**](../../maths/vector4/vector4.md) [**color**](../../../incomplete-docs.md) | Tints the image with an sRGB colour. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setColor**](image-color.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) red, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) green, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) blue, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) alpha | Tints the image from RGBA components. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setColor**](image-color.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) red, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) green, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) blue | Tints the RGB channels and keeps the current alpha. |
| [**Vector4**](../../maths/vector4/vector4.md) | [**getColor**](image-color.md) |  | Returns the tint converted back to sRGB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAlpha**](image-alpha.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) alpha | Sets the opacity channel and keeps the RGB tint. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getAlpha**](image-alpha.md) |  | Returns the opacity channel. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFlipY**](image-flip-y.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) flipY | Flips the texture vertically and disables automatic flip. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFlipY**](image-flip-y.md) |  | Returns `true` while the texture is flipped vertically. |
| [**AABB**](../../object/physics/2D/aabb/aabb.md) | [**getAABB**](image-aabb.md) |  | Returns the local-space axis-aligned bounding box. |
| [**AABB**](../../object/physics/2D/aabb/aabb.md) | [**getWorldAABB**](image-world-aabb.md) |  | Returns the world-space axis-aligned bounding box. |

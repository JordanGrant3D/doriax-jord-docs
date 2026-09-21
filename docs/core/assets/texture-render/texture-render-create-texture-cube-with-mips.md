[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureRender
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureRender](texture-render.md).createTextureCubeWithMips()

Uploads a cube map with custom pre-filtered mipmap chains (`data[level]` packs all six faces contiguously) for glossy CharacterController reflections.

```cpp
bool createTextureCubeWithMips(
        const std::string& label, int width,
        ColorFormat colorFormat, int numMipmaps, void* data[], size_t size[],
        TextureFilter minFilter, TextureFilter magFilter, TextureWrap wrapU, TextureWrap wrapV);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-create-texture-cube-with-mips.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-create-texture-cube-with-mips.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

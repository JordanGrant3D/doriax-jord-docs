---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
TextureFilter
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

enum

| Texture Filter | Description |
| :--- | :--- |
| NEAREST | Nearest-texel sampling; sharp pixels with no blending. |
| LINEAR | Bilinear sampling; smooth blending between neighbouring texels. |
| NEAREST_MIPMAP_NEAREST | Nearest texel from the nearest mipmap level. |
| NEAREST_MIPMAP_LINEAR | Nearest-texel sampling with blending between mipmap levels. |
| LINEAR_MIPMAP_NEAREST | Bilinear sampling within the nearest mipmap level. |
| LINEAR_MIPMAP_LINEAR | Bilinear sampling with blending between mipmap levels (trilinear). |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Image
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Image](image.md).textureScaleFactor

Insets the sampled UV rectangle by this many texels on every side (`0.0` by default). A small value such as `0.5` hides neighbouring atlas pixels that bilinear filtering would otherwise bleed in. CharacterController sets it on portrait sprites packed into a shared HUD atlas.

```cpp
void setTextureScaleFactor(float textureScaleFactor);
float getTextureScaleFactor() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-texture-scale-factor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-texture-scale-factor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

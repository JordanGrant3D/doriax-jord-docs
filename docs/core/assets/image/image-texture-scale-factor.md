[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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

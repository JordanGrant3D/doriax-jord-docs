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

## [TextureData](texture-data.md).getColorComponent()

Samples one channel (`0` = R, `1` = G, `2` = B, `3` = A) at texel `(x, y)`. The CharacterController footstep system reads the alpha channel to skip fully transparent frames.

```cpp
unsigned char getColorComponent(int x, int y, int color);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-get-color-component.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-get-color-component.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

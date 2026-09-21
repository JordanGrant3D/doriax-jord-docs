---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

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

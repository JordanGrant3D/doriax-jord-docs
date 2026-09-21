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

## [TextureData](texture-data.md).fitSize()

Places a rectangle into a resized canvas, letterboxing the CharacterController portrait into the loading-screen banner without stretching it.

```cpp
void fitSize(int xOffset, int yOffset, int newWidth, int newHeight);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-fit-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-fit-size.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

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

## [Texture](texture.md).getHeight()

Pixel height of the loaded sprite, or `0` when not loaded yet. Pair with `getWidth()` to preserve the CharacterController portrait aspect ratio in UI.

```cpp
unsigned int getHeight() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-height.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-height.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

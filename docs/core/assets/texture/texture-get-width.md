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

## [Texture](texture.md).getWidth()

Pixel width of the loaded sprite, or `0` when not loaded yet. The loading screen reads it to compute sprite-sheet frame rectangles.

```cpp
unsigned int getWidth() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-width.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-width.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

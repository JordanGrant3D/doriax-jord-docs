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

## [Texture](texture.md).operator=(const Texture& rhs)

Shares the sprite-sheet GPU resource with another handle (lightweight pool alias, not a pixel copy).

```cpp
Texture& operator=(const Texture& rhs);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

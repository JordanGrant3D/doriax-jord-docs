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

## [Texture](texture.md).operator!=(const Texture& rhs)

Inverse of `operator==`: detects when the minimap feed handle diverges from the sprite-sheet handle.

```cpp
bool operator != ( const Texture& rhs ) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-operator-not-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

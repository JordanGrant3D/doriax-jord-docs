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

## [Texture](texture.md).setId()

Assigns a pool cache key without pixel data, so this handle aliases a sprite-sheet texture already uploaded by the loading screen.

```cpp
void setId(const std::string& id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-id.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-id.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

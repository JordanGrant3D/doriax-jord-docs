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

## [Texture](texture.md).releaseData()

Frees CPU-side pixels after GPU upload to save RAM on low-memory devices. Rendering is unaffected; call it once the loading screen finishes warming the sprite sheets.

```cpp
void releaseData();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-release-data.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-release-data.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

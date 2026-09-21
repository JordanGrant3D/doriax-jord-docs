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

## [Texture](texture.md).retryLoad()

Re-arms a file-backed texture after a failed load so the next `load()` starts a fresh attempt. Use it on the loading screen retry button when a sprite sheet fails to stream in.

```cpp
void retryLoad();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-retry-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-retry-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

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

## [Texture](texture.md).destroy()

Releases the GPU resource and removes the texture from the pool, leaving the handle empty. Call it when swapping CharacterController skin packs to free video memory.

```cpp
void destroy();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-destroy.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-destroy.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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

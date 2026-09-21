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

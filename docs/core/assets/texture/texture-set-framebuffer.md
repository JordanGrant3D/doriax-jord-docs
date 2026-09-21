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

## [Texture](texture.md).setFramebuffer()

Points the texture at a render target so the minimap camera output can be sampled like any sprite. Unlike the `Texture(Framebuffer*)` constructor, this also clears `releaseDataAfterLoad`.

```cpp
void setFramebuffer(Framebuffer* framebuffer);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-framebuffer.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-framebuffer.h"
```

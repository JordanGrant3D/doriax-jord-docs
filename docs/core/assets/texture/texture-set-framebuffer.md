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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

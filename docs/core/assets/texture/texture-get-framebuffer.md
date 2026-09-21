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

## [Texture](texture.md).getFramebuffer()

Returns the bound render target, or `nullptr` for regular sprites. The minimap widget reads this to blit the latest frame.

```cpp
Framebuffer* getFramebuffer() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-framebuffer.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-framebuffer.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

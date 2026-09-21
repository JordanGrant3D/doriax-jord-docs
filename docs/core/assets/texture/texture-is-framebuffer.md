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

## [Texture](texture.md).isFramebuffer()

Returns `true` for render-to-texture handles created from a `Framebuffer`, such as the live minimap feed.

```cpp
bool isFramebuffer() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-is-framebuffer.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-is-framebuffer.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

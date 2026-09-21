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

## [Texture](texture.md).empty()

Returns `true` when no path, data, or framebuffer is assigned. Guard minimap setup with this before binding the render target.

```cpp
bool empty() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-empty.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-empty.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

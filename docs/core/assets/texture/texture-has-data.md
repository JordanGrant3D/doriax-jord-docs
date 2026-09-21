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

## [Texture](texture.md).hasData()

Reports whether the backing pixel array exists, so `getData()` can be dereferenced safely. A missing sprite file keeps a null data pointer even though the handle is not `empty()`.

```cpp
bool hasData() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-has-data.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-has-data.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

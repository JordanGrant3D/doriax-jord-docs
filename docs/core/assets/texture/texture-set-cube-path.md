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

## [Texture](texture.md).setCubePath()

Sets a single cube-map face by index (`0` = front through `5` = down). Useful for hot-swapping one skybox face, e.g. the night-sky `up` face, without re-listing all six paths.

```cpp
void setCubePath(size_t index, const std::string& path);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-cube-path.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-cube-path.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

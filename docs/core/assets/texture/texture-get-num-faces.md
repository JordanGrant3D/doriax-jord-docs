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

## [Texture](texture.md).getNumFaces()

Returns `1` for 2D sprites and `6` for cube-map skyboxes.

```cpp
size_t getNumFaces() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-num-faces.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-num-faces.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

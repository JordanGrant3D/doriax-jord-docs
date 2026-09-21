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

## [Texture](texture.md).setPath()

Points the texture at a 2D image file without loading it; the upload is deferred until first render. Assign the result to a [Material](../material/material.md) field to skin the CharacterController, or pass the path to the `Texture(path)` constructor instead.

```cpp
void setPath(const std::string& path);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-path.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-path.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

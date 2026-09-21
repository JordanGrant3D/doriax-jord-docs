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

## [Texture](texture.md).setCubePaths()

Loads a cube map from six individual files, typically the CharacterController level skybox or environment reflection.

```cpp
void setCubePaths(const std::string& front, const std::string& back, const std::string& left, const std::string& right, const std::string& up, const std::string& down);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-cube-paths.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-cube-paths.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

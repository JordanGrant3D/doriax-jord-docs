[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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

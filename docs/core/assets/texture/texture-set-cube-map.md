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

## [Texture](texture.md).setCubeMap()

Treats `path` as a directory of six face images (`front`, `back`, `left`, `right`, `up`, `down`) for a CharacterController skybox reflection probe.

```cpp
void setCubeMap(const std::string& path);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-cube-map.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-cube-map.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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

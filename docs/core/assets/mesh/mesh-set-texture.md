[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).setTexture

Assigns the outfit texture by file path, by raw texture data, or from a live framebuffer (for animated jersey numbers). A CharacterController script swaps home/away kits with the path overload on team change.

```cpp
void setTexture(const std::string& path);
void setTexture(const std::string& id, TextureData data);
void setTexture(Framebuffer* framebuffer);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-set-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-set-texture.h"
```

[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Image
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Image](image.md).setTexture

Assigns the texture to display: pass a file path, in-memory pixel data with a cache id, or a framebuffer for render-to-texture UI. CharacterController swaps the portrait sprite path on team change and can point it at a live framebuffer for animated portraits.

```cpp
void setTexture(const std::string& path);
void setTexture(const std::string& id, TextureData data);
void setTexture(Framebuffer* framebuffer);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-set-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-set-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

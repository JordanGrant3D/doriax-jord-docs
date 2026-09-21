[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).setImageDecodeMaxDimension

Caps GLTF texture decode resolution on the calling thread (`0` = full). A CharacterController script lowers it while scrolling the wardrobe thumbnails so kit previews stay fluid, restoring full resolution on equip.

```cpp
static void setImageDecodeMaxDimension(int dimension);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-set-image-decode-max-dimension.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-set-image-decode-max-dimension.h"
```

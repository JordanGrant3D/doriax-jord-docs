---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

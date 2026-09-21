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

## [Image](image.md).createImage

Explicitly builds the image geometry and GPU buffers, returning `true` on success. Normally optional because the UI system rebuilds images automatically; call it when C++ code needs the geometry immediately. CharacterController calls it right after assigning the portrait texture so the HUD shows the sprite on the first frame.

```cpp
bool createImage();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-create-image.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-create-image.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

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

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

## [Image](image.md).getWorldAABB

Returns the world-space axis-aligned bounding box of the image, after layout and transform. CharacterController uses it for HUD hit-testing so clicks on the portrait select the hero.

```cpp
AABB getWorldAABB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-world-aabb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-world-aabb.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

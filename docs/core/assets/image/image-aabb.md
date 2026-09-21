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

## [Image](image.md).getAABB

Returns the local-space axis-aligned bounding box of the image. CharacterController uses it to center the damage-flash overlay exactly over the portrait sprite.

```cpp
AABB getAABB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-aabb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-aabb.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

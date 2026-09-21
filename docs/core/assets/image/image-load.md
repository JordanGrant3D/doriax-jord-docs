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

## [Image](image.md).load

Loads the UI texture into the render system, returning `true` on success. CharacterController calls it after swapping the portrait texture so the new team sprite uploads before the next HUD draw.

```cpp
bool load();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

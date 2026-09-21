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

## [Image](image.md).flipY

Flips the texture vertically. `setFlipY` also disables automatic flip handling; `isFlipY` reports the current state. CharacterController enables it when the portrait sprite loads upside-down from a packed atlas.

```cpp
void setFlipY(bool flipY);
bool isFlipY() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-flip-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-flip-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

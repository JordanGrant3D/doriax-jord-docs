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

## [Image](image.md).patchMarginRight

9-patch right inset in pixels; corners narrower than this are never stretched. CharacterController widens it on the portrait frame so the health-pip corner stays crisp.

```cpp
void setPatchMarginRight(unsigned int marginRight);
unsigned int getPatchMarginRight() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-patch-margin-right.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-patch-margin-right.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

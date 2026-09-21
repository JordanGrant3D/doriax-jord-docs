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

## [Image](image.md).setPatchMargin

Sets the 9-patch insets: the uniform overload applies `margin` to all sides, the four-argument overload sets each side individually. Non-zero margins enable 9-patch mode so corners are never stretched. CharacterController frames the portrait sprite with a uniform border that survives HUD rescaling.

```cpp
void setPatchMargin(unsigned int margin);
void setPatchMargin(unsigned int marginLeft, unsigned int marginRight, unsigned int marginTop, unsigned int marginBottom);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-patch-margin.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-patch-margin.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

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

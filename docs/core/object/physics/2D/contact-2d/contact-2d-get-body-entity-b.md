[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Contact2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact2D](contact-2d.md).getBodyEntityB()

Entity id of body B in this contact pair. When it differs from `getEntity()`, the character has hit something else.

```cpp
Entity getBodyEntityB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-body-entity-b.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-body-entity-b.h"
```

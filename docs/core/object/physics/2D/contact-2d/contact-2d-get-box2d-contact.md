---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Contact2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact2D](contact-2d.md).getBox2DContact()

Raw Box2D contact data behind this snapshot. Read `manifold.pointCount` for a cheap touching test before unpacking the full manifold.

```cpp
b2ContactData getBox2DContact() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-box2d-contact.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-box2d-contact.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

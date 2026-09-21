---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
File
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [File](file.md).length()

Returns the total file size in bytes. The cursor position is preserved across the call. The CharacterController loading screen uses it to compute download progress while reading `saves/tutorial_slot0.json`.

```cpp
virtual unsigned int length();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-length.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-length.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).length()

Returns the total stream size in bytes. Pure virtual, implemented by [**File**](../file/file.md) and `Data`. The CharacterController loading screen uses it to size the progress bar while reading `saves/tutorial_config.json`.

```cpp
virtual unsigned int length() = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-length.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-length.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).

// Copyright 2016 Alexander Palaistras. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.

static void context_bind_proxy(char *name, zval *value) {
	zend_hash_str_update(&EG(symbol_table), name, strlen(name), value);
}

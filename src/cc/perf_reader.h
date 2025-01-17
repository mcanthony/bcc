/*
 * Copyright (c) 2015 PLUMgrid, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

struct perf_reader;

struct perf_reader * perf_reader_new(int fd, int page_cnt, perf_reader_cb cb, void *cb_cookie);
void perf_reader_free(void *ptr);
int perf_reader_mmap(struct perf_reader *reader, int fd, unsigned long sample_type);
int perf_reader_poll(int num_readers, struct perf_reader **readers);

/*

* C Program to Construct a Binary Search Tree and perform deletion, inorder traversal on it

*/

#include <stdio.h>

#include <stdlib.h>

struct btnode

{

int value;

struct btnode *l;

struct btnode *r;

}*root = NULL, *temp = NULL, *t2, *t1;

void delete1();

void insert();

void delete();

void inorder(struct btnode *t);

void create();

void search(struct btnode *t);

void preorder(struct btnode *t);

void postorder(struct btnode *t);

void search1(struct btnode *t,int data);

int smallest(struct btnode *t);

int largest(struct btnode *t);

int flag = 1;

void main()

{

int ch;

printf("\nOPERATIONS ---");

printf("\n1 - Insert an element into tree\n");

printf("2 - Delete an element from the tree\n");

printf("3 - Inorder Traversal\n");

printf("4 - Preorder Traversal\n");

printf("5 - Postorder Traversal\n");

printf("6 - Exit\n");

while(1)

{

printf("\nEnter your choice : ");

scanf("%d", &ch);

switch (ch)

{

case 1:

insert();

break;

case 2:

delete();

break;

case 3:

inorder(root);

break;

case 4:

preorder(root);

break;

case 5:

postorder(root);

break;

case 6:

exit(0);

default :

printf("Wrong choice, Please enter correct choice ");

break;

}

}

}

/* To insert a node in the tree */

void insert()

{

create();

if (root == NULL)

root = temp;

else

search(root);

}

/* To create a node */

void create()

{

int data;

printf("Enter data of node to be inserted : ");

scanf("%d", &data);

temp = (struct btnode *)malloc(1*sizeof(struct btnode));

temp->value = data;

temp->l = temp->r = NULL;

}

/* Function to search the appropriate position to insert the new node */

void search(struct btnode *t)

{

if ((temp->value > t->value) && (t->r != NULL)) /* value more than root node value insert at right */

search(t->r);

else if ((temp->value > t->value) && (t->r == NULL))

t->r = temp;

else if ((temp->value < t->value) && (t->l != NULL)) /* value less than root node value insert at left */

search(t->l);

else if ((temp->value < t->value) && (t->l == NULL))

t->l = temp;

}

/* recursive function to perform inorder traversal of tree */

void inorder(struct btnode *t)

{

if (root == NULL)

{

printf("No elements in a tree to display");

return;

}

if (t->l != NULL)

inorder(t->l);

printf("%d -> ", t->value);

if (t->r != NULL)

inorder(t->r);

}

/* To check for the deleted node */

void delete()

{

int data;

if (root == NULL)

{

printf("No elements in a tree to delete");

return;

128. }

129. printf("Enter the data to be deleted : ");

130. scanf("%d", &data);

131. t1 = root;

132. t2 = root;

133. search1(root, data);

134. }

135.  

136. /* To find the preorder traversal */

137. void preorder(struct btnode *t)

138. {

139. if (root == NULL)

140. {

141. printf("No elements in a tree to display");

142. return;

143. }

144. printf("%d -> ", t->value);

145. if (t->l != NULL)

146. preorder(t->l);

147. if (t->r != NULL)

148. preorder(t->r);

149. }

150.  

151. /* To find the postorder traversal */

152. void postorder(struct btnode *t)

153. {

154. if (root == NULL)

155. {

156. printf("No elements in a tree to display ");

157. return;

158. }

159. if (t->l != NULL)

160. postorder(t->l);

161. if (t->r != NULL)

162. postorder(t->r);

163. printf("%d -> ", t->value);

164. }

165.  

166. /* Search for the appropriate position to insert the new node */

167. void search1(struct btnode *t, int data)

168. {

169. if ((data>t->value))

170. {

171. t1 = t;

172. search1(t->r, data);

173. }

174. else if ((data < t->value))

175. {

176. t1 = t;

177. search1(t->l, data);

178. }

179. else if ((data==t->value))

180. {

181. delete1(t);

182. }

183. }

184.  

185. /* To delete a node */

186. void delete1(struct btnode *t)

187. {

188. int k;

189.  

190. /* To delete leaf node */

191. if ((t->l == NULL) && (t->r == NULL))

192. {

193. if (t1->l == t)

194. {

195. t1->l = NULL;

196. }

197. else

198. {

199. t1->r = NULL;

200. }

201. t = NULL;

202. free(t);

203. return;

204. }

205.  

206. /* To delete node having one left hand child */

207. else if ((t->r == NULL))

208. {

209. if (t1 == t)

210. {

211. root = t->l;

212. t1 = root;

213. }

214. else if (t1->l == t)

215. {

216. t1->l = t->l;

217.  

218. }

219. else

220. {

221. t1->r = t->l;

222. }

223. t = NULL;

224. free(t);

225. return;

226. }

227.  

228. /* To delete node having right hand child */

229. else if (t->l == NULL)

230. {

231. if (t1 == t)

232. {

233. root = t->r;

234. t1 = root;

235. }

236. else if (t1->r == t)

237. t1->r = t->r;

238. else

239. t1->l = t->r;

240. t == NULL;

241. free(t);

242. return;

243. }

244.  

245. /* To delete node having two child */

246. else if ((t->l != NULL) && (t->r != NULL))

247. {

248. t2 = root;

249. if (t->r != NULL)

250. {

251. k = smallest(t->r);

252. flag = 1;

253. }

254. else

255. {

256. k =largest(t->l);

257. flag = 2;

258. }

259. search1(root, k);

260. t->value = k;

261. }

262.  

263. }

264.  

265. /* To find the smallest element in the right sub tree */

266. int smallest(struct btnode *t)

267. {

268. t2 = t;

269. if (t->l != NULL)

270. {

271. t2 = t;

272. return(smallest(t->l));

273. }

274. else

275. return (t->value);

276. }

277.  

278. /* To find the largest element in the left sub tree */

279. int largest(struct btnode *t)

280. {

281. if (t->r != NULL)

282. {

283. t2 = t;

284. return(largest(t->r));

285. }

286. else

287. return(t->value);

288. }
